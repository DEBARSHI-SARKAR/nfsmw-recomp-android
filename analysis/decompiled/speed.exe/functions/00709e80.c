/* speed.exe 00709e80 FUN_00709e80; analysis pseudocode, not buildable source.
 * calls 00705980 FUN_00705980
 * calls 006fff90 FUN_006fff90
 */

int * __thiscall FUN_00709e80(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  
  lVar4 = FUN_006fff90(*param_3,param_3[1]);
  if (lVar4 != 0) {
    uVar3 = FUN_00705980(lVar4);
    if (uVar3 < *(uint *)(param_1 + 0x20)) {
      piVar1 = (int *)(uVar3 * 0x10 + *(int *)(param_1 + 0x1c));
      piVar2 = (int *)piVar1[2];
      if ((piVar2 != piVar1) && (piVar2 != piVar1)) {
        if ((piVar2 != (int *)0x0) && ((*piVar2 == param_3[2] && ((char)piVar2[1] != '\0')))) {
          piVar2[2] = piVar2[2] + 1;
          piVar2[7] = DAT_00925ae8;
          piVar2[9] = 0;
          *(undefined1 *)(piVar2 + 6) = 1;
        }
        return piVar2;
      }
    }
  }
  return (int *)0x0;
}

