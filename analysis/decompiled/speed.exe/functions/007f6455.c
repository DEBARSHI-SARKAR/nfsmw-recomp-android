/* speed.exe 007f6455 FUN_007f6455; analysis pseudocode, not buildable source.
 * calls 007f4821 FUN_007f4821
 * calls 007f3eef FUN_007f3eef
 * calls 007f43fe FUN_007f43fe
 * calls 007f46e4 FUN_007f46e4
 * calls 007f451d FUN_007f451d
 * calls 007f4667 FUN_007f4667
 * calls 007f66a8 FUN_007f66a8
 * calls 007f482b FUN_007f482b
 * calls 007f45fe FUN_007f45fe
 * calls 007f4414 FUN_007f4414
 * calls 007f445f FUN_007f445f
 * calls 007f4768 FUN_007f4768
 * calls 007f4e57 FUN_007f4e57
 */

void __fastcall FUN_007f6455(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 local_10;
  int local_c;
  undefined4 *local_8;
  
  piVar1 = (int *)(*(int *)(param_1 + 0x104) * 0x54 + 8 + param_1);
  iVar2 = *piVar1;
  if (iVar2 < 0x11) {
    if (iVar2 == 0x10) {
      *(undefined1 *)(param_1 + 0x110) = 0;
      *(undefined1 *)(param_1 + 0x111) = 0;
      *(undefined4 *)(param_1 + 0x114) = 0;
      iVar2 = piVar1[2] * 0x60 + piVar1[4];
      piVar1[2] = piVar1[2] + 1;
      if (*(char *)(iVar2 + 0x5c) == '\0') {
        FUN_007f66a8(1,9,0);
      }
      else if ((*(int *)(iVar2 + 0x58) == 1) || (*(int *)(iVar2 + 0x4c) != 0)) {
        FUN_007f451d(iVar2,*(undefined4 *)(iVar2 + 0x44),*(undefined4 *)(iVar2 + 0x48),
                     *(undefined4 *)(iVar2 + 0x40),(int *)(iVar2 + 0x4c));
      }
      else {
        FUN_007f445f(iVar2,*(undefined4 *)(iVar2 + 0x44),*(undefined4 *)(iVar2 + 0x48),
                     *(undefined4 *)(iVar2 + 0x40));
      }
    }
    else if (iVar2 == 1) {
      if (*(int *)(param_1 + 0x108) == 1) {
        *(undefined1 *)(param_1 + 0x110) = 0;
        *(undefined1 *)(param_1 + 0x111) = 0;
        *(undefined4 *)(param_1 + 0x114) = 0;
        iVar2 = piVar1[1];
      }
      else {
        iVar2 = -1;
      }
      FUN_007f4821(iVar2);
    }
    else if (iVar2 == 2) {
      *(undefined1 *)(param_1 + 0x110) = 0;
      *(undefined1 *)(param_1 + 0x111) = 0;
      *(undefined4 *)(param_1 + 0x114) = 0;
      FUN_007f43fe(piVar1[1]);
    }
    else if (iVar2 == 4) {
      *(undefined1 *)(param_1 + 0x110) = 0;
      *(undefined1 *)(param_1 + 0x111) = 0;
      *(undefined4 *)(param_1 + 0x114) = 0;
      FUN_007f3eef();
      local_c = piVar1[2];
      local_8 = &local_10;
      local_10 = 1;
      if ((piVar1[3] == 0) || (*(int *)(piVar1[3] + 0xc) == 0)) {
        FUN_007f4414(piVar1[1],1,&local_8);
      }
    }
    else if (iVar2 == 8) {
      *(undefined1 *)(param_1 + 0x110) = 0;
      *(undefined1 *)(param_1 + 0x111) = 0;
      *(undefined4 *)(param_1 + 0x114) = 0;
      if ((piVar1[5] == 0) || (*(int *)(piVar1[5] + 0xc) == 0)) {
        FUN_007f4e57(piVar1[1],piVar1[2],piVar1[3],piVar1[4]);
      }
    }
  }
  else if (iVar2 == 0x20) {
    *(undefined1 *)(param_1 + 0x110) = 0;
    *(undefined1 *)(param_1 + 0x111) = 0;
    *(undefined4 *)(param_1 + 0x114) = 0;
    if (piVar1[1] == 1) {
      FUN_007f45fe(piVar1[2],piVar1[4]);
    }
    else {
      FUN_007f4667(piVar1[1],piVar1[3],piVar1[4]);
    }
  }
  else if (iVar2 == 0x40) {
    if (*(int *)(param_1 + 0x108) != 2) {
      *(undefined1 *)(param_1 + 0x110) = 0;
      *(undefined1 *)(param_1 + 0x111) = 0;
      *(undefined4 *)(param_1 + 0x114) = 0;
    }
    if ((piVar1[0x14] == 1) || (piVar1[0x11] != 0)) {
      FUN_007f4768(piVar1 + 1,piVar1 + 0x11);
    }
    else {
      FUN_007f46e4(piVar1 + 1);
    }
  }
  else if (iVar2 == 0x80) {
    *(undefined1 *)(param_1 + 0x110) = 0;
    *(undefined1 *)(param_1 + 0x111) = 0;
    *(undefined4 *)(param_1 + 0x114) = 0;
    FUN_007f482b(piVar1[1],piVar1[2],piVar1[3],piVar1[4],piVar1[5]);
  }
  return;
}

