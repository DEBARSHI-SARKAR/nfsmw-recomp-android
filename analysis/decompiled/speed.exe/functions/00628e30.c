/* speed.exe 00628e30 FUN_00628e30; analysis pseudocode, not buildable source.
 * calls 006ca130 FUN_006ca130
 */

undefined4 __fastcall FUN_00628e30(int *param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = (**(code **)(*param_1 + 0xc))();
  if ((cVar1 != '\0') && (*(int *)(DAT_009203c4 + 0x4468 + param_1[6] * 4) == 0)) {
    iVar2 = FUN_006ca130(param_1[6],2);
    if (iVar2 == 0) {
      return 1;
    }
  }
  return 0;
}

