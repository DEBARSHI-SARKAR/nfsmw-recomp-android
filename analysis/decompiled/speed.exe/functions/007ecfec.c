/* speed.exe 007ecfec FUN_007ecfec; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_007ecfec(undefined4 *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  
  *param_1 = &PTR_LAB_008a894c;
  iVar2 = 4 - (int)param_2;
  do {
    cVar1 = *param_2;
    param_2[(int)param_1 + iVar2] = cVar1;
    param_2 = param_2 + 1;
  } while (cVar1 != '\0');
  return;
}

