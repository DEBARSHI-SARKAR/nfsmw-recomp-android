/* speed.exe 0045eec0 FUN_0045eec0; analysis pseudocode, not buildable source.
 * calls 0045cc70 FUN_0045cc70
 */

void FUN_0045eec0(int *param_1,undefined1 *param_2,int param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  piVar1 = param_1;
  if ((char)param_1[2] == '\0') {
    iVar2 = (param_1[1] - *param_4) + -1;
    if (iVar2 < param_3) {
      param_3 = iVar2;
    }
    *param_4 = *param_4 + param_3;
    if ((*param_1 != 0) && (0 < param_3)) {
      do {
        *(undefined1 *)*param_1 = *param_2;
        param_2 = param_2 + 1;
        param_3 = param_3 + -1;
        *param_1 = *param_1 + 1;
      } while (param_3 != 0);
    }
  }
  else if (param_3 != 0) {
    param_1 = (int *)param_3;
    uVar3 = DAT_0090e654;
    do {
      if ((char)piVar1[2] == '\0') {
        if (*param_4 < piVar1[1] + -1) {
          if ((undefined1 *)*piVar1 != (undefined1 *)0x0) {
            *(undefined1 *)*piVar1 = *param_2;
            *piVar1 = *piVar1 + 1;
          }
          goto LAB_0045ef47;
        }
      }
      else {
        (&DAT_0090df50)[uVar3] = *param_2;
        uVar3 = uVar3 + 1 & 0x7f;
        DAT_0090e654 = uVar3;
        if (uVar3 == 0x7f) {
          DAT_0090dfcf = 0;
          FUN_0045cc70(DAT_0090df08,&DAT_0090df50);
          uVar3 = 0;
          DAT_0090e654 = 0;
        }
LAB_0045ef47:
        *param_4 = *param_4 + 1;
      }
      param_2 = param_2 + 1;
      param_1 = (int *)((int)param_1 + -1);
      if (param_1 == (int *)0x0) {
        return;
      }
    } while( true );
  }
  return;
}

