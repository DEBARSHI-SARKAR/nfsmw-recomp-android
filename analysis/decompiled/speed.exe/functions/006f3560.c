/* speed.exe 006f3560 FUN_006f3560; analysis pseudocode, not buildable source.
 * calls 006f34e0 FUN_006f34e0
 */

void FUN_006f3560(float *param_1,float param_2)

{
  int *piVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined1 local_40 [48];
  float fStack_10;
  float fStack_c;
  float fStack_8;
  
  puVar3 = DAT_0092d93c;
  if (DAT_0092d93c != DAT_0092d93c + DAT_0092d944) {
    do {
      piVar1 = (int *)*puVar3;
      cVar2 = FUN_006f34e0();
      if ((cVar2 != '\0') &&
         ((**(code **)(*piVar1 + 0x3c))(local_40),
         (param_1[2] - fStack_8) * (param_1[2] - fStack_8) +
         (param_1[1] - fStack_c) * (param_1[1] - fStack_c) +
         (*param_1 - fStack_10) * (*param_1 - fStack_10) < param_2 * param_2)) {
        (**(code **)(*piVar1 + 0x28))();
        (**(code **)(*piVar1 + 0x60))();
      }
      puVar3 = puVar3 + 1;
    } while (puVar3 != DAT_0092d93c + DAT_0092d944);
  }
  return;
}

