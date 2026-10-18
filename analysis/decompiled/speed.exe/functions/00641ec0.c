/* speed.exe 00641ec0 FUN_00641ec0; analysis pseudocode, not buildable source.
 * calls 005d59f0 FUN_005d59f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00641ec0(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uStack_64;
  float fStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined1 auStack_4c [32];
  undefined4 auStack_2c [4];
  undefined4 auStack_1c [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00879938;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008a7430;
  local_4 = 0;
  if (((DAT_0092cd84 != 0) && (piVar3 = (int *)*DAT_0092cd7c, piVar3 != (int *)0x0)) &&
     (piVar2 = (int *)FUN_005d59f0(&LAB_00620250), piVar2 != (int *)0x0)) {
    piVar3 = (int *)(**(code **)(*piVar3 + 4))();
    if (param_1[2] == 0) {
      (**(code **)(*piVar3 + 100))(auStack_4c);
      puVar4 = auStack_2c;
      puVar5 = auStack_1c;
    }
    else {
      iVar1 = param_1[3];
      if (iVar1 == 0) goto LAB_00641f98;
      uStack_64 = *(undefined4 *)(iVar1 + 0x30);
      uStack_5c = *(undefined4 *)(iVar1 + 0x38);
      fStack_60 = *(float *)(iVar1 + 0x34) + _DAT_0089096c;
      uStack_58 = *(undefined4 *)(iVar1 + 0x20);
      uStack_54 = *(undefined4 *)(iVar1 + 0x24);
      uStack_50 = *(undefined4 *)(iVar1 + 0x28);
      puVar4 = &uStack_58;
      puVar5 = &uStack_64;
    }
    (**(code **)(*piVar2 + 0xc))(puVar5,puVar4);
  }
LAB_00641f98:
  *param_1 = &PTR_LAB_008a66f8;
  ExceptionList = local_c;
  return;
}

