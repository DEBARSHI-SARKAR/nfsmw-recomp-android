/* speed.exe 006d7f70 FUN_006d7f70; analysis pseudocode, not buildable source.
 * calls 006c9aa0 FUN_006c9aa0
 * calls 006c8000 FUN_006c8000
 */

void __fastcall FUN_006d7f70(int *param_1)

{
  int *piVar1;
  int *piVar2;
  
  if ((int *)*param_1 != param_1) {
    piVar1 = DAT_0093dec8;
    if (DAT_00982c08 == 0) {
      piVar1 = DAT_0093deec;
    }
    DAT_00982c80 = piVar1;
    (**(code **)(*piVar1 + 4))();
    piVar2 = DAT_00982bdc;
    (**(code **)(*DAT_00982bdc + 0x15c))(DAT_00982bdc,piVar1[0x13]);
    (**(code **)(*(int *)piVar1[0x12] + 0xfc))((int *)piVar1[0x12],&stack0xfffffff4,0);
    (**(code **)(*(int *)piVar1[0x12] + 0x100))((int *)piVar1[0x12],0);
    FUN_006c8000(&DAT_00987ab0,piVar2[1]);
    (**(code **)(*(int *)piVar1[0x12] + 0x104))((int *)piVar1[0x12]);
    if (*param_1 == 0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)(*param_1 + -0x10);
    }
    while (piVar2 != param_1 + -4) {
      FUN_006c9aa0();
      if (DAT_00988570 != '\0') break;
      if (piVar2[4] == 0) {
        piVar2 = (int *)0x0;
      }
      else {
        piVar2 = (int *)(piVar2[4] + -0x10);
      }
    }
    (**(code **)(*(int *)piVar1[0x12] + 0x108))((int *)piVar1[0x12]);
    (**(code **)(*piVar1 + 8))();
    (**(code **)(*(int *)piVar1[0x12] + 0x10c))((int *)piVar1[0x12]);
    DAT_00982c80 = (int *)0x0;
    (**(code **)(*DAT_00982bdc + 0xe4))(DAT_00982bdc,0x16,2);
  }
  return;
}

