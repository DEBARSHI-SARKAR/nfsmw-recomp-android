/* speed.exe 007dec30 ___dtold; analysis pseudocode, not buildable source.
 */

/* Library Function - Single Match
    ___dtold
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

void ___dtold(uint *param_1,uint *param_2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  ushort local_14;
  uint local_c;
  
  local_c = 0x80000000;
  iVar3 = (int)(*(ushort *)((int)param_2 + 6) & 0x7ff0) >> 4;
  uVar1 = *(ushort *)((int)param_2 + 6);
  uVar2 = *param_2;
  if (iVar3 == 0) {
    if (((param_2[1] & 0xfffff) == 0) && (uVar2 == 0)) {
      param_1[1] = 0;
      *param_1 = 0;
      *(undefined2 *)(param_1 + 2) = 0;
      return;
    }
    local_14 = 0x3c01;
    local_c = 0;
  }
  else if (iVar3 == 0x7ff) {
    local_14 = 0x7fff;
  }
  else {
    local_14 = (short)iVar3 + 0x3c00;
  }
  param_1[1] = (param_2[1] & 0xfffff) << 0xb | local_c | uVar2 >> 0x15;
  *param_1 = uVar2 << 0xb;
  while ((param_1[1] & 0x80000000) == 0) {
    param_1[1] = param_1[1] << 1 | (uint)((*param_1 & 0x80000000) != 0);
    *param_1 = *param_1 << 1;
    local_14 = local_14 - 1;
  }
  *(ushort *)(param_1 + 2) = uVar1 & 0x8000 | local_14;
  return;
}

