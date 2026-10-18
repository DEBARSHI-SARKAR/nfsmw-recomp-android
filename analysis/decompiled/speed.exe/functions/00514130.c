/* speed.exe 00514130 FUN_00514130; analysis pseudocode, not buildable source.
 * calls 00598970 FUN_00598970
 * calls 00586550 FUN_00586550
 * calls 00460c50 FUN_00460c50
 * calls 0056bc10 FUN_0056bc10
 */

undefined4 FUN_00514130(void)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  
  uVar1 = FUN_00586550();
  iVar2 = FUN_00460c50(uVar1);
  if (2 < iVar2) {
    pcVar3 = (char *)FUN_00586550();
    if (*pcVar3 != ' ') {
      return 1;
    }
  }
  uVar1 = FUN_0056bc10(0xd1f8f281);
  FUN_00598970(&DAT_00890978,&DAT_00890978,1,0x417b2601,0xffffffff,0xffffffff,uVar1);
  return 0;
}

