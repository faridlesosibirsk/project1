unit UCar;

interface

uses
  URoad;

type

  TCar = class
  private  
    X, V: real;
    P: integer;
    road: TRoad;
  public 
    procedure move;
    constructor Create(road0: TRoad; p0: integer; v0: real);
  end;

implementation

constructor TCar.Create(road0: TRoad; p0: integer; v0: real);
begin
  road:=road0; P:=p0; V:=v0;
end;

procedure TCar.move;
begin
  X:=X+V;
  if X > road.Length then X:=0;
end;

end.