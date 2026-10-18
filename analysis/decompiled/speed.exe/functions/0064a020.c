/* speed.exe 0064a020 FUN_0064a020; analysis pseudocode, not buildable source.
 * calls 006cbb40 FUN_006cbb40
 */

undefined4 FUN_0064a020(void)

{
  int iVar1;
  
  iVar1 = FUN_006cbb40();
  if ((((iVar1 != 1) && (iVar1 != 5)) && (iVar1 != 6)) &&
     (((iVar1 != 7 && (iVar1 != 8)) && (iVar1 != 9)))) {
    return 0;
  }
  return 1;
}

