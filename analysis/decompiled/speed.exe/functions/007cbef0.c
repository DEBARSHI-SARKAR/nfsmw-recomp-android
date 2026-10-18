/* speed.exe 007cbef0 __abstract_sw; analysis pseudocode, not buildable source.
 */

/* Library Function - Single Match
    __abstract_sw
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

uint __abstract_sw(ushort param_1)

{
  undefined4 local_8;
  
  local_8 = 0;
  if ((param_1 & 1) != 0) {
    local_8 = 0x10;
  }
  if ((param_1 & 4) != 0) {
    local_8 = local_8 | 8;
  }
  if ((param_1 & 8) != 0) {
    local_8 = local_8 | 4;
  }
  if ((param_1 & 0x10) != 0) {
    local_8 = local_8 | 2;
  }
  if ((param_1 & 0x20) != 0) {
    local_8 = local_8 | 1;
  }
  if ((param_1 & 2) != 0) {
    local_8 = local_8 | 0x80000;
  }
  return local_8;
}

