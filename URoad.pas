unit URoad;

interface

type
  TRoad = class
    Length: real;
    Width: integer;
  constructor Create(length0: real; width0: integer);  
  end;

implementation

constructor TRoad.Create(length0: real; width0: integer);
begin
  if length0>0 then Length:=length0 else Length:=1;
  if width0>0 then Width:=width0 else Width:=1;
end;

end.