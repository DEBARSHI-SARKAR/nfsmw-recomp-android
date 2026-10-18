/* speed.exe 0051f730 FUN_0051f730; analysis pseudocode, not buildable source.
 * calls 0045dbd0 FUN_0045dbd0
 * calls 00515520 FUN_00515520
 * calls 005155e0 FUN_005155e0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0051f730(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  float10 fVar3;
  undefined4 local_c;
  float local_8;
  undefined1 local_4 [4];
  
  if (*(char *)(param_1 + 0x34) == '\0') {
    fVar3 = (float10)FUN_0045dbd0((float)DAT_00925b14 * _DAT_00890984);
    uVar1 = *(undefined4 *)(param_1 + 0x3c);
    local_8 = (float)(fVar3 * (float10)_DAT_0089c408 + (float10)_DAT_0089c408);
    FUN_00515520(uVar1,local_4,&local_c);
    FUN_005155e0(uVar1,local_8,local_c);
    iVar2 = *(int *)(param_1 + 0x38) + 1;
    *(int *)(param_1 + 0x38) = iVar2;
    if (0x20 < iVar2) {
      *(undefined4 *)(param_1 + 0x38) = 1;
    }
  }
  return;
}

