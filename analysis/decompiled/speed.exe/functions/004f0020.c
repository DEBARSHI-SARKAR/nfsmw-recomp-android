/* speed.exe 004f0020 FUN_004f0020; analysis pseudocode, not buildable source.
 * calls 004cd570 FUN_004cd570
 * calls 004ae8b0 FUN_004ae8b0
 * calls 004de250 FUN_004de250
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004f0020(int param_1)

{
  uint *puVar1;
  char cVar2;
  undefined4 *puVar3;
  float10 fVar4;
  undefined4 local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 0xc) = 0;
  if (*(int *)(param_1 + 0x28) == 0) {
    return;
  }
  puVar1 = *(uint **)(param_1 + 0x10);
  local_18 = 0;
  local_8 = 0;
  local_4 = 0;
  if ((puVar1 == (uint *)0x0) || (*(int *)(*(int *)(DAT_00911fa8 + 0x24) + 0x24) == 0)) {
    local_c = 0;
  }
  else {
    local_c = *puVar1 & 0xffff;
  }
  if (puVar1 == (uint *)0x0) {
    local_14 = 0;
    local_10 = 0;
  }
  else {
    local_14 = (int)puVar1[1] >> 0x10 & 0x7fff;
    local_10 = puVar1[2] & 0x7fff;
  }
  FUN_004cd570(&local_18);
  fVar4 = (float10)FUN_004de250();
  puVar3 = *(undefined4 **)(param_1 + 0x28);
  if ((float10)_DAT_00890bf8 < fVar4) {
    if (*(char *)(puVar3 + 8) == '\0') {
      if (puVar3 != (undefined4 *)0x0) {
        (**(code **)*puVar3)(1);
        *(undefined4 *)(param_1 + 0x28) = 0;
        return;
      }
      goto LAB_004f0100;
    }
    cVar2 = FUN_004ae8b0();
    if (cVar2 == '\0') {
      return;
    }
    puVar3 = *(undefined4 **)(param_1 + 0x28);
  }
  if (puVar3 != (undefined4 *)0x0) {
    (**(code **)*puVar3)(1);
  }
LAB_004f0100:
  *(undefined4 *)(param_1 + 0x28) = 0;
  return;
}

