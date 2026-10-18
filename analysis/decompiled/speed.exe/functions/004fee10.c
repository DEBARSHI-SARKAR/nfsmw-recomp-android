/* speed.exe 004fee10 FUN_004fee10; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_004fee10(int *param_1)

{
  int *piVar1;
  ushort *puVar2;
  int *piVar3;
  int iVar4;
  
  if (*param_1 == 0) {
    iVar4 = param_1[2];
    piVar3 = param_1 + 4;
    if (0 < iVar4) {
      do {
        piVar1 = piVar3 + 0x14;
        puVar2 = (ushort *)((int)piVar3 + 10);
        piVar3 = piVar1;
        if (*puVar2 != 0) {
          piVar3 = piVar1 + (uint)*puVar2 * 0xc;
        }
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    *param_1 = 1;
  }
  return;
}

