double LI(double** m, double xx, int rows_countt)
{
    double LI = 0;
    for (int i = 0; i < rows_countt; i++)
    {
        LI += (m[i][2] * (m[i][1] - xx)) / (m[i][1] - xx);
    }

    return LI;
}
