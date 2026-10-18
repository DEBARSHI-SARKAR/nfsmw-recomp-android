/* speed.exe 005220c0 FUN_005220c0; analysis pseudocode, not buildable source.
 * calls 0056bc10 FUN_0056bc10
 * calls 0056e300 FUN_0056e300
 * calls 00513140 FUN_00513140
 */

void __fastcall FUN_005220c0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = *(int *)(param_1 + 0x25c);
  *(undefined1 *)(param_1 + 0x260) = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  if (iVar1 == 0) {
    *(undefined1 *)(param_1 + 0x1ab) = 1;
  }
  else {
    if (iVar1 == 0x7567616d) {
      uVar4 = 0x331f4f58;
    }
    else {
      if (iVar1 != 0x66756c6c) {
        if (iVar1 == 0x70617373) {
          DAT_0091ca74 = 0;
          uVar4 = FUN_0056bc10(0xb5eaa702);
          *(undefined4 *)(param_1 + 0x1b4) = 0x417b2601;
          *(undefined4 *)(param_1 + 0x1b8) = 0xffffffff;
          *(undefined4 *)(param_1 + 0x1bc) = 0xffffffff;
          *(undefined4 *)(param_1 + 0x1c0) = uVar4;
          *(undefined1 *)(param_1 + 0x1b0) = 1;
        }
        else if (iVar1 == 0x61737461) {
          uVar4 = FUN_0056bc10(0x1c098ddf);
          FUN_00513140(0x417b2601,0x23f1bfa,0x23f1bfa,uVar4);
          *(int *)(param_1 + 0x198) = *(int *)(param_1 + 0x198) + 1;
        }
        else {
          if (iVar1 == 0x696e7670) {
            uVar4 = FUN_0056bc10(0x4ad41e75);
            uVar3 = 0xffffffff;
            uVar2 = 0xffffffff;
          }
          else {
            uVar4 = FUN_0056bc10(0x4b5c9721);
            uVar3 = 0xb1fb0b6;
            uVar2 = 0xb1fb0b6;
          }
          FUN_00513140(0x417b2601,uVar2,uVar3,uVar4);
        }
        goto LAB_005221f9;
      }
      uVar4 = 0xd155595a;
    }
    uVar4 = FUN_0056bc10(uVar4);
    *(undefined4 *)(param_1 + 0x1c0) = uVar4;
    *(undefined4 *)(param_1 + 0x1b4) = 0x417b2601;
    *(undefined4 *)(param_1 + 0x1b8) = 0x23f1bfa;
    *(undefined4 *)(param_1 + 0x1bc) = 0x23f1bfa;
    *(undefined1 *)(param_1 + 0x1b0) = 1;
    *(int *)(param_1 + 0x198) = *(int *)(param_1 + 0x198) + 1;
  }
LAB_005221f9:
  FUN_0056e300(2);
  return;
}

