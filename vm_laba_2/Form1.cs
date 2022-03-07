using info.lundin.math;
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace vm_laba_2
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
            chart1.Series.Clear();
        }
        public double dy_h(List<double> Y, List<double> X, int number, int index)
        {
            if (number > 1)
            {
                return (dy_h(Y, X, number - 1, index + 1) - dy_h(Y, X, number - 1, index));
            }
            else if (number == 1)
            {
                return (Y[index + 1] - Y[index]);
            }
            else
            {
                throw new Exception("Not available parameter");
            }
        }

        public double GetValue(double[] X, double[] Y, double x, double h)
        {
            double res = Y[0];
            double buf;
            List<double> Xlist = new List<double>(X);
            List<double> Ylist = new List<double>(Y);
            double q = (x - X[0]) / h;
            buf = 1;
            for (int i = 1; i < Y.Length; i++)
            {
                buf *= (q - i + 1) / i;
                res += dy_h(Ylist, Xlist, i, 0) * buf;
            }
            return res;
        }

        private bool is_Full() {
            if (textBox1.Text == "" || textBox2.Text == "" || textBox3.Text == "" || textBox4.Text == "" || textBox5.Text == "")
            {
                return false;
            }

            return true;
        }


        private void button1_Click(object sender, EventArgs e)
        {
            if (is_Full())
            {
                listView1.Items.Clear();
                double eps = Convert.ToDouble(textBox5.Text);
                double step = Convert.ToDouble(textBox2.Text);
                double x = Convert.ToDouble(textBox3.Text);
                int count_nodes = Convert.ToInt32(textBox4.Text);
                string formula = textBox1.Text;
                ExpressionParser parser = new ExpressionParser();
                double[] arr_x = new double[count_nodes];
                double[] arr_y = new double[count_nodes];
                for (int i = 0; i < count_nodes; i++)
                {
                    listView1.Items.Add(Convert.ToString(Math.Round(x, 3)));
                    arr_x[i] = x;
                    x += step;
                }

                for (int i = 0; i < count_nodes; i++)
                {
                    parser.Values.Clear();
                    parser.Values.Add("x", arr_x[i]);
                    double result = parser.Parse(formula);
                    arr_y[i] = result;
                    listView1.Items[i].SubItems.Add(Convert.ToString(Math.Round(result, 3)));
                }

                double x1 = GetValue(arr_x, arr_y, arr_x[0], step);
                double x2 = GetValue(arr_x, arr_y, arr_x[0] + 0.01, step);
                double val1 = (x2 - x1) / 0.01;

                textBox7.Text = Convert.ToString(Math.Round(val1, 3));
                parser.Values.Clear();
                parser.Values.Add("x", arr_x[0]);
                double x1_1 = parser.Parse(formula);
                parser.Values.Clear();
                parser.Values.Add("x", arr_x[0] + 0.01);
                double x1_2 = parser.Parse(formula);
                double val2 = (x1_2 - x1_1) / 0.01;

                textBox8.Text = Convert.ToString(Math.Round(val2, 3));
                textBox6.Text = Convert.ToString(Math.Round(Math.Abs(val1 - val2), 5));

                chart1.Series.Clear();

                chart1.Series.Add("График ошибки");
                chart1.Series[0].ChartType = System.Windows.Forms.DataVisualization.Charting.SeriesChartType.Spline;

                double error = Math.Abs(val1 - val2);
                bool flag = false;
                while (error > eps)
                {
                    if (step > 0)
                    {
                        flag = true;
                        step = step / 2;
                        for (int i = 0; i < count_nodes; i++)
                        {
                            arr_x[i] = x;
                            x += step;
                        }

                        for (int i = 0; i < count_nodes; i++)
                        {
                            parser.Values.Clear();
                            parser.Values.Add("x", arr_x[i]);
                            double result = parser.Parse(formula);
                            arr_y[i] = result;
                        }

                        double x1_ = GetValue(arr_x, arr_y, arr_x[0], step);
                        double x2_ = GetValue(arr_x, arr_y, arr_x[0] + 0.01, step);
                        double val1_ = (x2_ - x1_) / 0.01;


                        parser.Values.Clear();
                        parser.Values.Add("x", arr_x[0]);
                        double x1_1_ = parser.Parse(formula);
                        parser.Values.Clear();
                        parser.Values.Add("x", arr_x[0] + 0.01);
                        double x1_2_ = parser.Parse(formula);
                        double val2_ = (x1_2_ - x1_1_) / 0.01;

                        error = Math.Abs(Math.Round((val2_ - val1_), 6));
                        chart1.Series[0].Points.AddXY(step, error);
                    }
                    else break;
                }

                textBox9.Text = Convert.ToString(Math.Round(step, 6));
                if (!flag)
                {
                    chart1.Series.Clear();
                    chart1.Titles.Clear();
                    chart1.Titles.Add("Получена точность выше заданной, график отсутствует");
                }
            }
            
        }
    }
}
