/* speed.exe 006450c0 FUN_006450c0; analysis pseudocode, not buildable source.
 * calls 00627a20 FUN_00627a20
 * calls 00644e40 FUN_00644e40
 * calls 006448e0 FUN_006448e0
 */

void __fastcall FUN_006450c0(int param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  
  cVar1 = FUN_00627a20();
  if (cVar1 != '\0') {
    *(undefined4 *)(param_1 + 0x4c) = DAT_00925b14;
  }
  cVar1 = FUN_00644e40();
  piVar2 = DAT_00920e4c;
  piVar3 = DAT_00920e4c;
  if (DAT_00920e4c != DAT_00920e4c + DAT_00920e54) {
    do {
      if ((cVar1 == '\0') ||
         ((*(char *)(*piVar3 + 0x281) != '\0' && (-1 < *(int *)(*piVar3 + 0x268))))) {
        FUN_006448e0();
        piVar2 = DAT_00920e4c;
      }
      piVar3 = piVar3 + 1;
    } while (piVar3 != piVar2 + DAT_00920e54);
  }
  return;
}

