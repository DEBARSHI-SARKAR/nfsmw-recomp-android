/* speed.exe 006bd3b0 FUN_006bd3b0; analysis pseudocode, not buildable source.
 * calls 006e2f50 FUN_006e2f50
 */

void FUN_006bd3b0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iStack_2c;
  int *piStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_c;
  
  iStack_20 = 0x6bd3b9;
  FUN_006e2f50();
  iStack_20 = param_1[2];
  iStack_24 = 0;
  piStack_28 = DAT_00982bdc;
  iStack_2c = 0x6bd3d1;
  (**(code **)(*DAT_00982bdc + 0x94))();
  iStack_2c = param_1[3];
  (**(code **)(*DAT_00982bdc + 0x9c))(DAT_00982bdc);
  if (iStack_c != 0) {
    iVar1 = *param_1;
    if ((((iVar1 < 5) || (10 < iVar1)) && (iVar1 != 1)) && (iVar1 != 3)) {
      if (iVar1 != 2) {
        (**(code **)(*DAT_00982bdc + 0xac))(DAT_00982bdc,0,0,7,0xff000000,0x3f800000,0);
        goto LAB_006bd44c;
      }
      uVar2 = 1;
    }
    else {
      uVar2 = 3;
    }
    (**(code **)(*DAT_00982bdc + 0xac))(DAT_00982bdc,0,0,uVar2,0xff000000,0x3f800000,0);
  }
LAB_006bd44c:
  iStack_24 = param_1[5];
  iStack_20 = param_1[6];
  iStack_2c = 0;
  piStack_28 = (int *)0x0;
  (**(code **)(*DAT_00982bdc + 0xbc))(DAT_00982bdc,&iStack_2c);
  DAT_00982a20 = param_1;
  DAT_00982c80 = 0;
  return;
}

