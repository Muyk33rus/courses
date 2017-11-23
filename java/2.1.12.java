public static boolean doubleExpression(double a, double b, double c) {
    if (java.lang.Math.abs((a + b) - c) < 1E-4 )
        return true;
    else
        return false;
}