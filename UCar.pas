unit UCar;

interface

uses
  URoad;

type

  TCar = class
    X, V: real;
    P: integer;
    road: TRoad;
    constructor Create(road0: TRoad; p0: integer; v0: real);
  end;

implementation

constructor TCar.Create(road0: TRoad; p0: integer; v0: real);
begin
  road:=road0; P:=p0; V:=v0;
end;

end.