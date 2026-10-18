/* speed.exe 00781f70 FUN_00781f70; analysis pseudocode, not buildable source.
 * calls 007808c0 FUN_007808c0
 */

void FUN_00781f70(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 auStack_78 [10];
  undefined4 local_48 [16];
  undefined4 local_8;
  undefined4 local_4;
  
  local_48[0] = 0;
  local_48[1] = 0;
  local_48[2] = 0;
  local_48[3] = 0;
  local_48[4] = 0;
  local_48[5] = 0;
  local_48[6] = 0;
  local_48[7] = 0;
  puVar2 = local_48;
  puVar3 = local_48 + 8;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_8 = 0;
  local_4 = 0;
  puVar2 = local_48 + 8;
  puVar3 = auStack_78;
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_007808c0(param_1);
  return;
}

