/* speed.exe 00749dc0 FUN_00749dc0; analysis pseudocode, not buildable source.
 * calls 0073cd30 FUN_0073cd30
 * calls 006c0a30 FUN_006c0a30
 */

int __thiscall FUN_00749dc0(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  FUN_0073cd30();
  iVar1 = 2;
  do {
    FUN_006c0a30();
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  *(undefined4 *)(param_1 + 0x36a0) = 0;
  *(undefined4 *)(param_1 + 0x28c) = 0;
  *(undefined4 *)(param_1 + 0x290) = DAT_009b0a3c;
  *(undefined4 *)(param_1 + 0x36a4) = 0;
  *(undefined4 *)(param_1 + 0x36a8) = 0;
  *(undefined4 *)(param_1 + 0x36a4 + param_3 * 4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x288) = param_2;
  *(undefined4 *)(param_1 + 0x3514) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x351c) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x3550) = 0x80;
  *(undefined1 *)(param_1 + 0x3551) = 0x80;
  *(undefined1 *)(param_1 + 0x3552) = 0x80;
  *(undefined1 *)(param_1 + 0x3553) = 0x80;
  *(undefined1 *)(param_1 + 0x3554) = 0x80;
  *(undefined1 *)(param_1 + 0x3555) = 0x80;
  *(undefined1 *)(param_1 + 0x3556) = 0x80;
  *(undefined1 *)(param_1 + 0x3557) = 0x80;
  *(undefined1 *)(param_1 + 0x3558) = 0x80;
  *(undefined1 *)(param_1 + 0x3559) = 0x80;
  *(undefined1 *)(param_1 + 0x355a) = 0x80;
  *(undefined1 *)(param_1 + 0x355b) = 0x80;
  *(undefined1 *)(param_1 + 0x355c) = 0x80;
  *(undefined1 *)(param_1 + 0x355d) = 0x80;
  *(undefined1 *)(param_1 + 0x355e) = 0x80;
  *(undefined1 *)(param_1 + 0x355f) = 0x80;
  *(undefined4 *)(param_1 + 0x35b4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x35bc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x3518) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x3520) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x35b8) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x35c0) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x234) = 0;
  *(undefined4 *)(param_1 + 0x238) = 0;
  *(undefined4 *)(param_1 + 0x3510) = 0;
  *(undefined4 *)(param_1 + 0x3524) = 0;
  *(undefined4 *)(param_1 + 0x3528) = 0;
  *(undefined4 *)(param_1 + 0x352c) = 0;
  *(undefined4 *)(param_1 + 0x35b0) = 0;
  *(undefined4 *)(param_1 + 0x35c4) = 0;
  *(undefined4 *)(param_1 + 0x35c8) = 0;
  *(undefined4 *)(param_1 + 0x35cc) = 0;
  *(undefined4 *)(param_1 + 0x34a8) = 0;
  *(undefined4 *)(param_1 + 0x34ac) = 0;
  *(undefined4 *)(param_1 + 0x34b0) = 0;
  *(undefined4 *)(param_1 + 0x23c) = 0;
  *(undefined4 *)(param_1 + 0x240) = 0;
  *(undefined4 *)(param_1 + 0x280) = 0;
  *(undefined4 *)(param_1 + 0x33d8) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x35f0) = 100;
  *(undefined1 *)(param_1 + 0x35f1) = 100;
  *(undefined1 *)(param_1 + 0x35f2) = 100;
  *(undefined1 *)(param_1 + 0x35f3) = 0x1c;
  *(undefined1 *)(param_1 + 0x35f4) = 100;
  *(undefined1 *)(param_1 + 0x35f5) = 100;
  *(undefined1 *)(param_1 + 0x35f6) = 100;
  *(undefined1 *)(param_1 + 0x35f7) = 0x1c;
  *(undefined1 *)(param_1 + 0x35f8) = 100;
  *(undefined1 *)(param_1 + 0x35f9) = 100;
  *(undefined1 *)(param_1 + 0x35fa) = 100;
  *(undefined1 *)(param_1 + 0x35fb) = 0x1c;
  *(undefined1 *)(param_1 + 0x35fc) = 100;
  *(undefined1 *)(param_1 + 0x35fd) = 100;
  *(undefined1 *)(param_1 + 0x35fe) = 100;
  *(undefined1 *)(param_1 + 0x35ff) = 0x1c;
  return param_1;
}

