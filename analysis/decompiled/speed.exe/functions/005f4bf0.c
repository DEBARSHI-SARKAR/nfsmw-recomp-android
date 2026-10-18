/* speed.exe 005f4bf0 FUN_005f4bf0; analysis pseudocode, not buildable source.
 * calls 005ee250 FUN_005ee250
 * calls 005d0370 FUN_005d0370
 * calls 005e2580 FUN_005e2580
 * calls 00652ad0 _malloc
 * calls 0045a430 FUN_0045a430
 * calls 005e6490 FUN_005e6490
 * calls 005f48e0 FUN_005f48e0
 */

void __fastcall FUN_005f4bf0(int param_1)

{
  int *piVar1;
  void *pvVar2;
  int *piVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined1 local_2c [4];
  int *local_28;
  int local_24;
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00875ac0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005e2580(0x1d975142,0,0);
  local_4 = 0;
  local_28 = (int *)FUN_005e6490();
  local_24 = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_005f48e0(local_20,local_2c,0xa3d34781);
  iVar5 = local_24;
  *(int *)(param_1 + 0xa4) = local_24;
  pvVar2 = _malloc(local_24 * 0x14);
  if (pvVar2 == (void *)0x0) {
    pvVar2 = (void *)0x0;
  }
  else if (-1 < iVar5 + -1) {
    puVar4 = (undefined1 *)((int)pvVar2 + 8);
    do {
      *(undefined4 *)(puVar4 + -8) = 0;
      *(undefined4 *)(puVar4 + -4) = 0;
      *puVar4 = 0;
      puVar4[1] = 0;
      *(undefined2 *)(puVar4 + 2) = 0;
      *(undefined4 *)(puVar4 + 4) = 0;
      *(undefined4 *)(puVar4 + 8) = 0;
      puVar4 = puVar4 + 0x14;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  *(void **)(param_1 + 0xa8) = pvVar2;
  piVar3 = (int *)*local_28;
  if (piVar3 != local_28) {
    do {
      *(int *)((int)pvVar2 + 4) = piVar3[2];
      FUN_005ee250();
      piVar3 = (int *)*piVar3;
      pvVar2 = (void *)((int)pvVar2 + 0x14);
    } while (piVar3 != local_28);
  }
  piVar3 = (int *)*local_28;
  *local_28 = (int)local_28;
  local_28[1] = (int)local_28;
  local_4 = local_4 & 0xffffff00;
  local_24 = 0;
  if (piVar3 != local_28) {
    do {
      piVar1 = (int *)*piVar3;
      FUN_005d0370(piVar3,0xc,0);
      piVar3 = piVar1;
    } while (piVar1 != local_28);
  }
  if (local_28 != (int *)0x0) {
    FUN_005d0370(local_28,0xc,0);
  }
  local_28 = (int *)0x0;
  local_4 = 0xffffffff;
  FUN_0045a430();
  ExceptionList = local_c;
  return;
}

