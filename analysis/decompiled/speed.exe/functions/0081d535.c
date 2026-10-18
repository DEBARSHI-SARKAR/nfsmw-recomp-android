/* speed.exe 0081d535 FUN_0081d535; analysis pseudocode, not buildable source.
 * calls 0081dafd FUN_0081dafd
 */

int FUN_0081d535(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_0090bd18 + param_1 * 10;
  iVar2 = FUN_0081dafd(param_2);
  return iVar2 + iVar1 * 4 + 0x214;
}

