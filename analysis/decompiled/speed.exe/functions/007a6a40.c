/* speed.exe 007a6a40 FUN_007a6a40; analysis pseudocode, not buildable source.
 * calls 005252d0 FUN_005252d0
 * calls 005251a0 FUN_005251a0
 * calls 00514cc0 FUN_00514cc0
 * calls 00514c70 FUN_00514c70
 * calls 007a67f0 FUN_007a67f0
 * calls 00524920 FUN_00524920
 * calls 005249d0 FUN_005249d0
 * calls 00524850 FUN_00524850
 * calls 00515b90 FUN_00515b90
 * calls 00525220 FUN_00525220
 */

void __thiscall
FUN_007a6a40(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (param_2 != 0) {
    uVar1 = *(uint *)(param_2 + 0x20) & 0xf0;
    if (uVar1 == 0x10) {
      uVar2 = FUN_00524850(*(undefined4 *)(param_1 + 4),0xd0582feb);
      FUN_00514cc0(uVar2);
      uVar2 = FUN_005251a0(*(undefined4 *)(param_1 + 4),0xd0582feb,0x696ae039);
      FUN_00515b90(uVar2);
    }
    else if (uVar1 == 0x20) {
      uVar2 = FUN_00524850(*(undefined4 *)(param_1 + 4),0xd0582feb);
      FUN_00514cc0(uVar2);
      uVar2 = FUN_005251a0(*(undefined4 *)(param_1 + 4),0xd0582feb,0x1a777e25);
      FUN_00515b90(uVar2);
    }
    else {
      uVar2 = FUN_00524850(*(undefined4 *)(param_1 + 4),0xd0582feb);
      FUN_00514c70(uVar2);
    }
    if ((((byte)*(undefined4 *)(param_2 + 0x20) & 0xf) == 2) && (param_3 != 0)) {
      if (*(char *)(param_1 + 0xd) != '\0') {
        *(undefined1 *)(param_1 + 0xc) = 1;
        FUN_00525220(*(undefined4 *)(param_1 + 4),0xa6298e25,param_3);
        FUN_00524920(*(undefined4 *)(param_1 + 4),0xebc3e6b7,0x5079c8f8,1);
      }
      FUN_007a67f0(2);
    }
    else {
      if (*(char *)(param_1 + 0xc) != '\0') {
        *(undefined1 *)(param_1 + 0xc) = 0;
        FUN_00524920(*(undefined4 *)(param_1 + 4),0xebc3e6b7,0x33113ac,1);
      }
      uVar2 = *(undefined4 *)(param_1 + 4);
      if (((byte)*(undefined4 *)(param_2 + 0x20) & 0xf) == 3) {
        uVar2 = FUN_00524850(uVar2,0xcffb7033);
        FUN_00514cc0(uVar2);
        uVar2 = FUN_005251a0(*(undefined4 *)(param_1 + 4),0xcffb7033,0xcffb7033);
        FUN_00515b90(uVar2);
        iVar3 = FUN_005249d0(*(undefined4 *)(param_1 + 4),0xcffb7033,0x280164f);
        if (iVar3 == 0) goto LAB_007a6bce;
        uVar2 = *(undefined4 *)(param_1 + 4);
        uVar4 = 0x280164f;
      }
      else {
        uVar4 = 0x16a259;
      }
      FUN_00524920(uVar2,0xcffb7033,uVar4,1);
    }
  }
LAB_007a6bce:
  FUN_005252d0(*(undefined4 *)(param_1 + 4),0x6f25a248,&DAT_0089c2d0,param_4);
  FUN_005252d0(*(undefined4 *)(param_1 + 4),0xb2037bdc,&DAT_0089c2d0,param_5);
  return;
}

