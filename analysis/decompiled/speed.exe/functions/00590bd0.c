/* speed.exe 00590bd0 FUN_00590bd0; analysis pseudocode, not buildable source.
 * calls 00739a70 FUN_00739a70
 * calls 005816b0 FUN_005816b0
 * calls 00759800 FUN_00759800
 * calls 00580cd0 FUN_00580cd0
 * calls 007594a0 FUN_007594a0
 * calls 0056f2f0 FUN_0056f2f0
 * calls 005815b0 FUN_005815b0
 */

int * __thiscall FUN_00590bd0(int *param_1,int param_2,uint param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 local_310 [784];
  
  iVar1 = 0;
  piVar4 = param_1;
  do {
    if (*piVar4 == param_2) {
      piVar4 = param_1 + iVar1 * 5;
      if (piVar4 == (int *)0x0) {
        return (int *)0x0;
      }
      iVar1 = 0;
      piVar2 = param_1;
      do {
        if (*piVar2 == -1) {
          param_1 = param_1 + iVar1 * 5;
          FUN_005815b0();
          *param_1 = iVar1;
          if (param_1 != (int *)0x0) {
            param_1[1] = piVar4[1];
            param_1[2] = piVar4[2];
            param_1[3] = piVar4[3];
            iVar1 = FUN_00580cd0();
            if (iVar1 != 0) {
              *(undefined1 *)(param_1 + 4) = *(undefined1 *)(iVar1 + 0x194);
              param_1[3] = param_1[3] & 0xffff0000U | param_3;
              FUN_00739a70(0xffffffff,0,0,0);
              uVar7 = 0;
              uVar6 = 0;
              uVar5 = 0;
              uVar3 = FUN_005816b0(0,0,0);
              FUN_00739a70(uVar3,uVar5,uVar6,uVar7);
              FUN_00759800();
              FUN_007594a0();
              FUN_0056f2f0(local_310);
              return param_1;
            }
            *param_1 = -1;
          }
          return (int *)0x0;
        }
        iVar1 = iVar1 + 1;
        piVar2 = piVar2 + 5;
      } while (iVar1 < 200);
      return (int *)0x0;
    }
    iVar1 = iVar1 + 1;
    piVar4 = piVar4 + 5;
  } while (iVar1 < 200);
  return (int *)0x0;
}

