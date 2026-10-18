/* speed.exe 005e4a40 FUN_005e4a40; analysis pseudocode, not buildable source.
 * calls 00460cd0 FUN_00460cd0
 * calls 00460bf0 FUN_00460bf0
 */

undefined4 __thiscall FUN_005e4a40(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  
  iVar1 = FUN_00460bf0(param_2);
  iVar4 = 0;
  puVar5 = (undefined4 *)(param_1 + 0x144);
  puVar3 = puVar5;
  do {
    if (iVar1 == puVar3[3]) {
      *puVar3 = param_3;
      puVar3[2] = 0;
      *(undefined1 *)(puVar3 + 1) = 1;
      return 1;
    }
    iVar4 = iVar4 + 1;
    puVar3 = puVar3 + 9;
  } while (iVar4 < 8);
  iVar1 = 0;
  do {
    if (*(char *)(puVar5 + 1) == '\0') {
      FUN_00460cd0(puVar5 + 4,param_2,0x13);
      uVar2 = FUN_00460bf0(puVar5 + 4);
      puVar5[3] = uVar2;
      *puVar5 = param_3;
      puVar5[2] = 0;
      *(undefined1 *)(puVar5 + 1) = 1;
      return 1;
    }
    iVar1 = iVar1 + 1;
    puVar5 = puVar5 + 9;
  } while (iVar1 < 8);
  return 0;
}

