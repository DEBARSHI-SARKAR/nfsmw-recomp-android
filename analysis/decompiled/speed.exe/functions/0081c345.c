/* speed.exe 0081c345 FUN_0081c345; analysis pseudocode, not buildable source.
 * calls 00862ba4 FUN_00862ba4
 * calls 00862b9b FUN_00862b9b
 */

undefined4 FUN_0081c345(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = param_1[0x4e];
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x10) != 0)) {
    if (*(int *)(iVar1 + 0x20) < 0) {
      return 1;
    }
    if (*(int *)(iVar1 + 0x20) != 0) {
      uVar2 = FUN_00862b9b(*param_1);
      if (4000000 < uVar2) {
        uVar2 = 4000000;
      }
      if (((uVar2 * 1000) / *(uint *)(iVar1 + 0x10) < *(uint *)(iVar1 + 0x20)) &&
         (iVar3 = FUN_00862ba4(*param_1), iVar3 != 2)) {
        if (0 < (int)param_1[0x4d]) {
          return 1;
        }
        iVar3 = FUN_00862ba4(*param_1);
        if (iVar3 != 0) {
          return 1;
        }
      }
      *(undefined4 *)(iVar1 + 0x20) = 0;
    }
  }
  return 0;
}

