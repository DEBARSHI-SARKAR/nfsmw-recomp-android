/* speed.exe 00729da0 FUN_00729da0; analysis pseudocode, not buildable source.
 * calls 0045f340 FUN_0045f340
 * calls 004fc780 FUN_004fc780
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00729da0(void)

{
  undefined4 *puVar1;
  int iVar2;
  float10 fVar3;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_2c = *(undefined4 *)(DAT_00919690 + 0x44);
  local_28 = *(undefined4 *)(DAT_00919690 + 0x48);
  local_30 = *(undefined4 *)(DAT_00919690 + 0x40);
  for (puVar1 = DAT_009aa3c0; (undefined4 **)puVar1 != &DAT_009aa3c0; puVar1 = (undefined4 *)*puVar1
      ) {
    local_20 = puVar1[0x16];
    local_1c = puVar1[0x17];
    local_18 = puVar1[0x18];
    fVar3 = (float10)FUN_0045f340(&local_20,&local_30);
    if ((fVar3 < (float10)_DAT_00890fc8) && (iVar2 = FUN_004fc780(1), iVar2 != 0)) {
      *(undefined4 *)(iVar2 + 0x10) = puVar1[0x16];
      *(undefined4 *)(iVar2 + 0x14) = puVar1[0x17];
      *(undefined4 *)(iVar2 + 0x18) = puVar1[0x18];
      *(undefined1 *)(iVar2 + 0x2c) = 0x12;
      *(undefined1 *)(iVar2 + 0x2d) = 2;
    }
  }
  return;
}

