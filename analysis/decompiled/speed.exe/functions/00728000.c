/* speed.exe 00728000 FUN_00728000; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_00728000(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x1ac)) {
    piVar3 = (int *)(param_1 + 0x1b0);
    do {
      iVar1 = *piVar3;
      *(int *)(param_1 + 0x2c4 + *(int *)(param_1 + 0x2c0) * 4) = iVar1;
      *(int *)(param_1 + 0x2c0) = *(int *)(param_1 + 0x2c0) + 1;
      *(undefined1 *)(iVar1 + 0xb) = 1;
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x1ac));
  }
  *(undefined4 *)(param_1 + 0x1ac) = 0;
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  return;
}

