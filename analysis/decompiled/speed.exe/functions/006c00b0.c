/* speed.exe 006c00b0 FUN_006c00b0; analysis pseudocode, not buildable source.
 */

void FUN_006c00b0(void)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    (**(code **)(*DAT_00982bdc + 0x104))(DAT_00982bdc,iVar1,0);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 8);
  return;
}

