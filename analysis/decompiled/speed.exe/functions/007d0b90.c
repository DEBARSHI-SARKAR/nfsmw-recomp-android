/* speed.exe 007d0b90 FUN_007d0b90; analysis pseudocode, not buildable source.
 * calls EXTERNAL:00000073 SetUnhandledExceptionFilter
 */

undefined4 FUN_007d0b90(void)

{
  DAT_009bac18 = SetUnhandledExceptionFilter(__CxxUnhandledExceptionFilter);
  return 0;
}

