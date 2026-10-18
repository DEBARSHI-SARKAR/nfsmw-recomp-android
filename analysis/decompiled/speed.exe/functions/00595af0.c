/* speed.exe 00595af0 FUN_00595af0; analysis pseudocode, not buildable source.
 * calls 0056bb80 FUN_0056bb80
 * calls 005d59f0 FUN_005d59f0
 * calls 004647e0 FUN_004647e0
 * calls 00460bf0 FUN_00460bf0
 * calls 005cc240 FUN_005cc240
 * calls 0056bc10 FUN_0056bc10
 */

void __thiscall FUN_00595af0(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 local_40 [64];
  
  if (param_2 == *(int *)(param_1 + 0x2c)) {
    return;
  }
  if (param_2 <= *(int *)(param_1 + 0x2c)) goto LAB_00595cb4;
  iVar1 = FUN_005cc240("copcross");
  if ((param_3 == iVar1) || (iVar1 = FUN_005cc240("copsport"), param_3 == iVar1)) {
    iVar1 = FUN_0056bb80();
    if (iVar1 == 0) {
      iVar1 = FUN_0056bb80();
      goto LAB_00595c3f;
    }
  }
  else {
    iVar1 = FUN_005cc240("copmidsize");
    if (param_3 == iVar1) {
      uVar3 = 0xf49a550a;
    }
    else {
      iVar1 = FUN_005cc240("copghost");
      if (param_3 == iVar1) {
        uVar3 = 0x902311da;
      }
      else {
        iVar1 = FUN_005cc240("copgto");
        if (param_3 == iVar1) {
          uVar3 = 0x9bfd379f;
        }
        else {
          iVar1 = FUN_005cc240("copgtoghost");
          if (param_3 == iVar1) {
            uVar3 = 0x65e97524;
          }
          else {
            iVar1 = FUN_005cc240("copsporthench");
            if (param_3 == iVar1) {
              uVar3 = 0x4ee07213;
            }
            else {
              iVar1 = FUN_005cc240("copsportghost");
              if (param_3 == iVar1) {
                uVar3 = 0x4ed00512;
              }
              else {
                iVar1 = FUN_005cc240("copsuv");
                if (param_3 == iVar1) {
                  uVar3 = 0x9bfd6ad3;
                }
                else {
                  iVar1 = FUN_005cc240("copsuvpatrol");
                  if (param_3 == iVar1) {
                    uVar3 = 0x9bfd6ad3;
                  }
                  else {
                    iVar1 = FUN_005cc240("copsuvl");
                    if (param_3 != iVar1) goto LAB_00595cb4;
                    uVar3 = 0x1baac57f;
                  }
                }
              }
            }
          }
        }
      }
    }
    iVar1 = FUN_0056bc10(uVar3);
LAB_00595c3f:
    if (iVar1 == 0) goto LAB_00595cb4;
  }
  FUN_004647e0(local_40,0x40,iVar1,param_4 * param_5);
  if (DAT_0092d884 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)*DAT_0092d87c;
  }
  (**(code **)(*piVar2 + 0x20))();
  piVar2 = (int *)FUN_005d59f0(&LAB_005650b0);
  if (piVar2 != (int *)0x0) {
    iVar1 = *piVar2;
    uVar3 = FUN_00460bf0("COPS_TAKENOUT_ICON",0x13ff94,2);
    (**(code **)(iVar1 + 4))(local_40,0,0x8ab83edb,uVar3);
  }
LAB_00595cb4:
  *(int *)(param_1 + 0x2c) = param_2;
  return;
}

