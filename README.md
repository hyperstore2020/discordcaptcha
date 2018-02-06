### Don't use this branch! It is in developed and won't work. Use the master branch.


<img src="https://image.ibb.co/gEN0oR/discord_banner.png"><br/>
A Captcha verification bot based on Discord.js.

You can find a detailed tutorial <a href="https://www.gitbook.com/book/y21/discordcaptcha/">here</a>.

## Setup procedure
DiscordCaptcha requires NodeJS 8.0+. Install it <a href="https://nodejs.org/en/download/package-manager/">here</a>.<br />
To install all required NPM-Modules, run the install script in `~/setup/` (.sh or .bat file depends on your operating system) (or `npm install` <b>in bots' directory</b> if both don't work.) (Click <a href="https://discordjs.guide/#/preparations/?id=installing-nodejs">here</a> for a detailed installation tutorial on how to install nodejs)<br/><br/>
For now, make sure the bot is only in one guild.
The config file is located in `~/src/`. Get your Token from <a href="https://discordapp.com/developers/applications/me">here</a>.


## Additional commands

```js
/**
* Snowflake: ID
* Mention: A basic mention (looks like <@123456789>)
**/
!block <Snowflake> // Blocks a User ID. If the User sends a message to the guild, he'll get kicked.
!removeBlock <Snowflake> // Removes a User ID from the blacklist. User can write again without getting kicked.
!clear <Amount of messages> // Clears an amount of messages, up to 100
!version // The current version and the latest version
!create-role // Creates the verification role
```

## Adding captchas
You can add as many captchas as you want into the `~/captchas/` directory, but please keep in mind that:
- Extension has to be .png
- Filename **has** to be the same as the captcha.

## API related commands

```js
!api queries // Current query
!api querydelete // Deletes the query (should be executed every 2 or 3 weeks)
!api purgelogs // Purges the logs
!api logs // Get logs
!api captchas // All captchas (limited to 2000 chars)
```
<b>Note: </b>If you want to use these commands, you have to put your tag into the `contributors` array.
<img src="https://i.imgur.com/Pw4MnB0.png"></img>


## Tips

• Look at the wiki for some fixes.<br/>
• Contact me via discord. (y21#0909 | ID: 312715611413413889)<br/>
• Open a Pull Request/Issue
