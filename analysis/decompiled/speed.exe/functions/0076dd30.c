/* speed.exe 0076dd30 FUN_0076dd30; analysis pseudocode, not buildable source.
 * calls 00765450 FUN_00765450
 */

int FUN_0076dd30(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  byte *local_8;
  byte *local_4;
  
  FUN_00765450(param_1,&local_8);
  iVar3 = 0;
  iVar2 = 0;
  for (uVar1 = (uint)*local_8; uVar1 != 0; uVar1 = uVar1 - 1) {
    local_8 = local_8 + 4;
    if (((byte)*(undefined4 *)local_8 & 0xf) == 1) {
      iVar3 = iVar3 + 1;
    }
  }
  for (uVar1 = (uint)*local_4; uVar1 != 0; uVar1 = uVar1 - 1) {
    local_4 = local_4 + 4;
    if (((byte)*(undefined4 *)local_4 & 0xf) == 1) {
      iVar2 = iVar2 + 1;
    }
  }
  if (iVar3 <= iVar2) {
    iVar3 = iVar2;
  }
  return iVar3;
}

