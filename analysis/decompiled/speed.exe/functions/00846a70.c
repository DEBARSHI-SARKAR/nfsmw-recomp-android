/* speed.exe 00846a70 FUN_00846a70; analysis pseudocode, not buildable source.
 * calls 008521b0 FUN_008521b0
 * calls 007c64e0 _strncpy
 * calls 0083a670 FUN_0083a670
 * calls 0083b210 FUN_0083b210
 * calls 007d6cb0 __security_check_cookie
 * calls 0083a630 FUN_0083a630
 * calls 0083a980 FUN_0083a980
 * calls 0083afb0 FUN_0083afb0
 * calls 0083c880 FUN_0083c880
 * calls 0083c4e0 FUN_0083c4e0
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00846a70(void)

{
  char *pcVar1;
  byte bVar2;
  undefined4 uVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  int unaff_EDI;
  bool bVar7;
  undefined1 local_604 [512];
  undefined1 local_404 [256];
  char local_304 [256];
  byte local_204 [512];
  undefined4 local_4;
  
  local_4 = DAT_00906980;
  pcVar1 = (char *)(unaff_EDI + 0x2d4);
  FUN_0083a980(pcVar1,0x100,&DAT_008c6ea4,*(undefined4 *)(unaff_EDI + 0x4dc));
  if (*(int *)(unaff_EDI + 0x1b0) != 0) {
    FUN_0083afb0(pcVar1,0x100,&DAT_008b68e8,*(int *)(unaff_EDI + 0x1b0));
  }
  FUN_0083a630(local_604,0x200,unaff_EDI + 0x454);
  if (*pcVar1 != '\0') {
    FUN_0083c880(local_604,0x200,&DAT_008b6d8c,pcVar1);
  }
  local_304[0] = ' ';
  local_304[1] = '\0';
  if (*(char *)(unaff_EDI + 0x1d4) != '\0') {
    _strncpy(local_304,(char *)(unaff_EDI + 0x1d4),0x100);
  }
  FUN_0083c880(local_604,0x200,&DAT_008b6dc0,local_304);
  if (*(char *)(unaff_EDI + 0x3d4) != '\0') {
    FUN_0083c880(local_604,0x200,&DAT_008c6ea8,unaff_EDI + 0x3d4);
  }
  if (*(int *)(unaff_EDI + 0x4d8) == 1) {
    FUN_0083c880(local_604,0x200,&DAT_008b6e64,&DAT_008c6cf8);
  }
  if (*(int *)(unaff_EDI + 0x4d4) != 0) {
    FUN_0083c880(local_604,0x200,&DAT_008b6e64,&DAT_008c6ec8);
  }
  FUN_0083a630(local_204,0x200,local_604);
  uVar3 = FUN_0083a670(local_604,&DAT_008b6d8c,local_404,0x100,&DAT_00890978);
  FUN_0083b210(uVar3);
  FUN_0083c4e0(local_404,&DAT_008c6ea4);
  FUN_0083c4e0(local_204,&DAT_008b6d8c);
  FUN_0083c880(local_204,0x200,&DAT_008b6d8c,local_404);
  pbVar4 = local_204;
  pbVar6 = (byte *)(unaff_EDI + 0xd6c);
  do {
    bVar2 = *pbVar4;
    bVar7 = bVar2 < *pbVar6;
    if (bVar2 != *pbVar6) {
LAB_00846c7d:
      iVar5 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      goto LAB_00846c82;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar4[1];
    bVar7 = bVar2 < pbVar6[1];
    if (bVar2 != pbVar6[1]) goto LAB_00846c7d;
    pbVar4 = pbVar4 + 2;
    pbVar6 = pbVar6 + 2;
  } while (bVar2 != 0);
  iVar5 = 0;
LAB_00846c82:
  if (iVar5 == 0) {
    FUN_0083a980(local_604,0x200,&DAT_008c6ec0,1);
  }
  FUN_0083a630((byte *)(unaff_EDI + 0xd6c),0x200,local_204);
  FUN_008521b0(*(undefined4 *)(unaff_EDI + 0xc),0x50534554,0,local_604,0xffffffff);
  *(undefined4 *)(unaff_EDI + 0x4e0) = 0;
  return;
}

