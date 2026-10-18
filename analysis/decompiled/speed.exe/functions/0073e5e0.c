/* speed.exe 0073e5e0 FUN_0073e5e0; analysis pseudocode, not buildable source.
 * calls 00444fe0 FUN_00444fe0
 */

void __thiscall FUN_0073e5e0(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(param_1 + 0x34);
  iVar2 = 0x17;
  do {
    FUN_00444fe0(*piVar1 + 0x20,param_2);
    piVar1 = piVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

