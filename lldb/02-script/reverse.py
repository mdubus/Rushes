import lldb
import commands
import optparse
import shlex
import string

# debugger: Is the primordial object that creates targets and provides access to them.
# It also manages the overall debugging experiences.
#
# command:A python string containing all arguments for your command.
#
# result: Represents a container which holds the result from command execution.
# It works with SBCommandInterpreter.HandleCommand() to encapsulate the result of command execution.
#
# internal_dict: The dictionary for the current embedded script session which contains all variables and functions.

def reverse(debugger, command, result, internal_dict):
	taregt = debugger.GetSelectedTarget()
	process = taregt.GetProcess()
	breakpoint = taregt.BreakpointCreateByName("main")
	process.Continue()
	res = str(taregt.GetExecutable())[::-1]
	res = res.split('/')
	print >>result, "FT_" + res[0]

# command script add -f: LLDB command to import a script.
#
# print_command: file name
#
# print_frame: function name
#
# print_frame: how we will invoke the function in Xcode

def __lldb_init_module(debugger, internal_dict):
    debugger.HandleCommand('command script add -f reverse.reverse reverse')
