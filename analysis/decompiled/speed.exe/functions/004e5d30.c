/* speed.exe 004e5d30 FUN_004e5d30; analysis pseudocode, not buildable source.
 * calls 004e5970 FUN_004e5970
 */

void __fastcall FUN_004e5d30(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 10;
  do {
    piVar1 = (int *)FUN_004e5970(0,1);
    (**(code **)(*piVar1 + 4))(1);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}

