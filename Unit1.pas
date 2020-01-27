Unit Unit1;

interface

uses 
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

implementation

procedure Form1.buttonRoad_Click(sender: Object; e: EventArgs);
begin
  road:=TRoad.Create;
  road.Length:=60;
  road.Width:=3;
end;

end.
