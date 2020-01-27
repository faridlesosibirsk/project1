Unit Unit1;

interface

uses 
  Crt,
  UCar,
  URoad,
  System, System.Drawing, System.Windows.Forms;

type
  Form1 = class(Form)
    //procedure buttonRoad_Click(sender: Object; e: EventArgs);
    
  private
    road: TRoad;
    procedure button_Click(sender: Object; e: EventArgs);
  {$region FormDesigner}
  private
    {$resource Unit1.Form1.resources}
    buttonCar: Button;
    buttonMove: Button;
    button1: Button;
    buttonRoad: Button;
    {$include Unit1.Form1.inc}
  {$endregion FormDesigner}
  public
    constructor;
    begin
      InitializeComponent;
    end;
  end;
  
  const
    N = 3;
  var
    cars: array [1..N] of TCar;
    
implementation

procedure Form1.button_Click(sender: Object; e: EventArgs);
var
  i: integer;
begin
  road:=TRoad.Create(60, 3);
  for i:=1 to N do
    cars[i]:=TCar.Create(road, i, 2.0*i);
  repeat  
    for i:=1 to N do cars[i].move; 
  until KeyPressed;
end;

end.
