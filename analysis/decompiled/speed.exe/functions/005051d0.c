/* speed.exe 005051d0 FUN_005051d0; analysis pseudocode, not buildable source.
 * calls 00503400 FUN_00503400
 */

void __fastcall FUN_005051d0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if ((DAT_00925860 == 0) && (iVar3 = 0, '\0' < *(char *)(param_1 + 0x19))) {
    do {
      iVar1 = *(int *)(param_1 + 0x2c);
      uVar2 = FUN_00503400(*(undefined4 *)(iVar1 + iVar3 * 8),1,0);
      *(undefined4 *)(iVar1 + iVar3 * 8 + 4) = uVar2;
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(char *)(param_1 + 0x19));
  }
  return;
}

