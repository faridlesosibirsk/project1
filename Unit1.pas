Unit Unit1;

interface

uses 
  UCar,
  URoad,
  System, System.Drawing, System.Windows.Forms;

type
  Form1 = class(Form)
    procedure buttonRoad_Click(sender: Object; e: EventArgs);
  {$region FormDesigner}
  private
    road: TRoad;
    {$resource Unit1.Form1.resources}
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

procedure Form1.buttonRoad_Click(sender: Object; e: EventArgs);
begin
  road:=TRoad.Create(60, 3);
end;

end.
