/* speed.exe 004a6a70 FUN_004a6a70; analysis pseudocode, not buildable source.
 * calls 0048d7d0 FUN_0048d7d0
 * calls 0048dec0 FUN_0048dec0
 * calls 0049ff90 FUN_0049ff90
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 __thiscall FUN_004a6a70(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  char cVar3;
  undefined4 *unaff_retaddr;
  undefined4 uStack_3c;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_4;
  
  iVar2 = DAT_00911800;
  uStack_3c = 0;
  cVar3 = (**(code **)(**(int **)(param_1 + 0x18) + 0x18))(param_2,DAT_00911800);
  if (cVar3 == '\0') {
    return 0;
  }
  puVar1 = (undefined4 *)(iVar2 + 0x10);
  uStack_1c = *puVar1;
  uStack_18 = *(undefined4 *)(iVar2 + 0x14);
  uStack_14 = *(undefined4 *)(iVar2 + 0x18);
  uStack_10 = *(undefined4 *)(iVar2 + 0x1c);
  if (*(float *)(param_1 + 0x28) == _DAT_00890968) {
    uStack_3c = *puVar1;
  }
  else {
    FUN_0049ff90(iVar2,0);
    cVar3 = (**(code **)(**(int **)(param_1 + 0x1c) + 0x18))(uStack_4,iVar2,0);
    if (cVar3 == '\0') {
      return 0;
    }
    uStack_28 = *(undefined4 *)(iVar2 + 0x14);
    uStack_2c = *puVar1;
    uStack_24 = *(undefined4 *)(iVar2 + 0x18);
    uStack_20 = *(undefined4 *)(iVar2 + 0x1c);
    FUN_0048d7d0(*(undefined4 *)(param_1 + 0x28),&uStack_1c,&uStack_2c,&uStack_3c);
  }
  uStack_1c = 0;
  uStack_18 = 0x3f800000;
  uStack_14 = 0;
  uStack_10 = 0x3f800000;
  FUN_0048dec0(&uStack_3c,&uStack_1c,&uStack_2c);
  *unaff_retaddr = uStack_2c;
  unaff_retaddr[1] = uStack_24;
  return 1;
}

