/* speed.exe 00856e70 FUN_00856e70; analysis pseudocode, not buildable source.
 * calls 00856510 FUN_00856510
 */

void FUN_00856e70(int param_1,undefined1 *param_2,int param_3)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  
  uVar2 = *(uint *)(param_1 + 0x48) & 0x3f;
  uVar5 = 0;
  *(undefined1 *)(uVar2 + param_1) = 0x80;
  uVar3 = uVar2 + 1;
  if (0x38 < uVar3) {
    *(undefined1 *)(uVar3 + param_1) = 0;
    *(undefined1 *)(uVar2 + 2 + param_1) = 0;
    *(undefined1 *)(uVar2 + 3 + param_1) = 0;
    *(undefined1 *)(uVar2 + 4 + param_1) = 0;
    *(undefined1 *)(uVar2 + 5 + param_1) = 0;
    *(undefined1 *)(uVar2 + 6 + param_1) = 0;
    *(undefined1 *)(uVar2 + 7 + param_1) = 0;
    *(undefined1 *)(uVar2 + 8 + param_1) = 0;
    FUN_00856510(param_1);
    uVar3 = 0;
  }
  *(undefined1 *)(uVar3 + param_1) = 0;
  *(undefined1 *)(uVar3 + 1 + param_1) = 0;
  *(undefined1 *)(uVar3 + 2 + param_1) = 0;
  uVar2 = (int)(uVar3 + 3) >> 2;
  puVar4 = (undefined4 *)(param_1 + uVar2 * 4);
  do {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x10);
  *(char *)(param_1 + 0x38) = *(char *)(param_1 + 0x48) << 3;
  uVar2 = *(uint *)(param_1 + 0x48);
  *(char *)(param_1 + 0x39) = (char)(uVar2 >> 5);
  *(char *)(param_1 + 0x3b) = (char)(uVar2 >> 0x15);
  *(char *)(param_1 + 0x3a) = (char)(uVar2 >> 0xd);
  *(byte *)(param_1 + 0x3c) = (byte)(uVar2 >> 0x1d);
  FUN_00856510(param_1);
  puVar1 = PTR_s_0123456789abcdef_0090d4cc;
  uVar2 = 0;
  do {
    if ((uVar2 & 3) == 0) {
      uVar5 = *(uint *)(param_1 + 0x4c + ((int)uVar2 >> 2) * 4);
    }
    if (param_3 < 0x21) {
      if ((int)uVar2 < param_3) {
        *param_2 = (char)uVar5;
        goto LAB_00856f53;
      }
    }
    else {
      *param_2 = puVar1[uVar5 >> 4 & 0xf];
      param_2 = param_2 + 1;
      *param_2 = puVar1[uVar5 & 0xf];
LAB_00856f53:
      param_2 = param_2 + 1;
    }
    uVar5 = uVar5 >> 8;
    uVar2 = uVar2 + 1;
    if (0xf < (int)uVar2) {
      if (0x20 < param_3) {
        *param_2 = 0;
      }
      return;
    }
  } while( true );
}

