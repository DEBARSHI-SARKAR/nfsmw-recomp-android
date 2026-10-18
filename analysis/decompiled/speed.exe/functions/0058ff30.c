/* speed.exe 0058ff30 FUN_0058ff30; analysis pseudocode, not buildable source.
 * calls 0057fb50 FUN_0057fb50
 */

void __thiscall FUN_0058ff30(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = FUN_0057fb50();
  piVar2 = (int *)(param_1 + 0x2c);
  iVar3 = 0xb;
  do {
    if (*piVar2 == param_2) {
      *piVar2 = iVar1;
    }
    if (piVar2[1] == param_2) {
      *piVar2 = iVar1;
    }
    piVar2 = piVar2 + 6;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}

