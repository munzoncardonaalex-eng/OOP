class CuentaBancaria{
    private String titular;
    private double saldo;

    public CuentaBancaria(String titular,double saldoInicial) {
        this.titular=titular;
        this.saldo=saldoInicial;
 }

     public String getTitular(){
        return titular;
 }

    public double getSaldo(){
        return saldo;
 }

    public void depositar(double monto){
        if (monto > 0) saldo += monto;
 }

    public void retirar(double monto){
        if (monto > 0 && monto <= saldo)saldo-=monto;
 }

 public void mostrar() {
 System.out.println("Titular="+titular);
 System.out.println("Saldo="+saldo);
 }
 
 }

 publicclassMainCuenta{
 publicstaticvoidmain(String[]args){
 CuentaBancariac1=newCuentaBancaria("Maria",100000.0);
 c1.mostrar();

 c1.depositar(25000.0);
 c1.retirar(10000.0);

 System.out.println("\nDespuesdeoperaciones:");
 c1.mostrar();
 }
 }