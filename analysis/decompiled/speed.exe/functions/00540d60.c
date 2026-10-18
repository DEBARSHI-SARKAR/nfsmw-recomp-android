/* speed.exe 00540d60 FUN_00540d60; analysis pseudocode, not buildable source.
 * calls 005b8550 FUN_005b8550
 * calls 005922b0 FUN_005922b0
 * calls 00516af0 FUN_00516af0
 * calls 005252d0 FUN_005252d0
 * calls 00652ad0 _malloc
 */

void __fastcall FUN_00540d60(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  
  puVar1 = _malloc(0x2c);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar3 = puVar1 + 3;
    *puVar1 = &PTR_FUN_0089d348;
    *puVar3 = puVar3;
    puVar1[4] = puVar3;
    puVar1[5] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    *(undefined1 *)(puVar1 + 10) = 1;
  }
  if ((((*(int *)(param_1 + 0x10) == 0) ||
       (iVar2 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar2 == 0)) ||
      (iVar2 = FUN_005b8550(0x6d851451), iVar2 == 0)) || (*(int *)(iVar2 + 0x18) != 2)) {
    iVar2 = 0;
  }
  puVar3 = _malloc(0x10);
  if (puVar3 == (undefined4 *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    *puVar3 = &PTR_FUN_0089c2bc;
    puVar3[3] = iVar2;
    piVar4 = puVar3 + 1;
  }
  puVar3 = (undefined4 *)puVar1[4];
  *puVar3 = piVar4;
  puVar1[4] = piVar4;
  *piVar4 = (int)(puVar1 + 3);
  piVar4[1] = (int)puVar3;
  FUN_005922b0(puVar1);
  FUN_005252d0(*(undefined4 *)(param_1 + 0x10),0x6d851451,&DAT_0089dfa0);
  return;
}

