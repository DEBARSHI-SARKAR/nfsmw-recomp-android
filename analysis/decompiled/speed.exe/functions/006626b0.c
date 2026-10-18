/* speed.exe 006626b0 FUN_006626b0; analysis pseudocode, not buildable source.
 * calls 0045ed50 FUN_0045ed50
 * calls 00661aa0 FUN_00661aa0
 * calls 00658f40 FUN_00658f40
 * calls 00660d90 FUN_00660d90
 */

int FUN_006626b0(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  code *pcVar3;
  
  uVar2 = DAT_0092568c;
  pcVar3 = DAT_00925688;
  while (DAT_00925688 = pcVar3, DAT_0092568c = uVar2, DAT_0092585c != 0) {
    if (1 < DAT_0092585c) {
      FUN_0045ed50(&DAT_00925688,&DAT_00925690,DAT_0092585c << 3);
    }
    DAT_0092585c = DAT_0092585c + -1;
    (*pcVar3)(uVar2);
    uVar2 = DAT_0092568c;
    pcVar3 = DAT_00925688;
  }
  FUN_00660d90();
  FUN_00661aa0();
  puVar1 = DAT_009259a4;
  if (DAT_00925858 != 0) {
    for (; (undefined4 **)puVar1 != &DAT_009259a4; puVar1 = (undefined4 *)*puVar1) {
      if (puVar1[0xc] == 0) {
        FUN_00658f40();
        if (puVar1[0xc] != 0) {
          DAT_00925858 = DAT_00925858 + -1;
          if ((code *)puVar1[0xd] != (code *)0x0) {
            (*(code *)puVar1[0xd])(puVar1[0xe]);
          }
        }
        return DAT_00925858;
      }
    }
  }
  return 0;
}

